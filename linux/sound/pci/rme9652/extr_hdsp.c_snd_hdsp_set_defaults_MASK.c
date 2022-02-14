
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdsp {int control_register; int control2_register; scalar_t__ io_type; int * mixer_matrix; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct hdsp*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct hdsp*) ;
 int FUNC_3 (struct hdsp*,int,int) ;
 int FUNC_4 (struct hdsp*,int ,int) ;
 scalar_t__ FUNC_5 (struct hdsp*,unsigned int,int ) ;
 int FUNC_6 (struct hdsp*) ;

__attribute__((used)) static int FUNC_7(struct hdsp *VAR_14)
{
 unsigned int VAR_15;
 VAR_14->control_register = VAR_5 |
                   VAR_10 |
                   FUNC_1(7) |
                   VAR_7;


 FUNC_4(VAR_14, VAR_12, VAR_14->control_register);




 VAR_14->control2_register = 0;

 if (VAR_14->io_type == VAR_2)
         FUNC_6 (VAR_14);
 else
  FUNC_4 (VAR_14, VAR_11, VAR_14->control2_register);

 FUNC_2(VAR_14);
 FUNC_0(VAR_14);



 for (VAR_15 = 0; VAR_15 < VAR_8; ++VAR_15)
  VAR_14->mixer_matrix[VAR_15] = VAR_13;

 for (VAR_15 = 0; VAR_15 < ((VAR_14->io_type == VAR_2 || VAR_14->io_type == VAR_1) ? 1352 : VAR_8); ++VAR_15) {
  if (FUNC_5 (VAR_14, VAR_15, VAR_13))
   return -VAR_0;
 }


 if (VAR_14->io_type == VAR_1) {
  VAR_14->control_register |= (VAR_6 | VAR_3 | VAR_9);
  FUNC_4(VAR_14, VAR_12, VAR_14->control_register);
 }




 FUNC_3(VAR_14, 48000, 1);

 return 0;
}
