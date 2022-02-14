
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdsp {scalar_t__ io_type; unsigned short* mixer_matrix; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct hdsp*,int,int ) ;
 int FUNC_1 (struct hdsp*,int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct hdsp *VAR_5, unsigned int VAR_6, unsigned short VAR_7)
{
 unsigned int VAR_8;

 if (VAR_6 >= VAR_3)
  return -1;

 if (VAR_5->io_type == VAR_1 || VAR_5->io_type == VAR_0) {
  if (VAR_5->io_type == VAR_0 && VAR_6 >= 512)
   return 0;

  if (VAR_5->io_type == VAR_1 && VAR_6 >= 1352)
   return 0;

  VAR_5->mixer_matrix[VAR_6] = VAR_7;
  VAR_8 = VAR_6/2;

  FUNC_1 (VAR_5, 4096 + (VAR_8*4),
       (VAR_5->mixer_matrix[(VAR_6&0x7fe)+1] << 16) +
       VAR_5->mixer_matrix[VAR_6&0x7fe]);

  return 0;

 } else {

  VAR_8 = (VAR_6 << 16) + VAR_7;

  if (FUNC_0(VAR_5, 127, VAR_2))
   return -1;

  FUNC_1 (VAR_5, VAR_4, VAR_8);
  VAR_5->mixer_matrix[VAR_6] = VAR_7;

 }

 return 0;
}
