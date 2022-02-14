
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int buf ;
struct TYPE_2__ {char* optname; void* offset; void* opttype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_0 (int ,char*) ;
 void* VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,char*,char*,int ,int,int ,int ) ;
 int FUNC_2 () ;
 int * VAR_9 ;
 int VAR_10 ;
 TYPE_1__* VAR_11 ;
 int VAR_12 ;
 void* FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,int,char*,int) ;

void
FUNC_5(void)
{
 int VAR_13;
 char VAR_14[16];

 VAR_10 = FUNC_2();


 FUNC_1(VAR_10, "length",
       "Length of signature in bits",
       VAR_3, 1, VAR_6,
       VAR_0);
 VAR_11[0].optname = "length";
 VAR_11[0].opttype = VAR_7;
 VAR_11[0].offset = FUNC_3(VAR_1, VAR_12);


 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++)
 {
  FUNC_4(VAR_14, sizeof(VAR_14), "col%d", VAR_13 + 1);
  FUNC_1(VAR_10, VAR_14,
        "Number of bits generated for each index column",
        VAR_2, 1, VAR_5,
        VAR_0);
  VAR_11[VAR_13 + 1].optname = FUNC_0(VAR_8,
                 VAR_14);
  VAR_11[VAR_13 + 1].opttype = VAR_7;
  VAR_11[VAR_13 + 1].offset = FUNC_3(VAR_1, VAR_9[0]) + sizeof(int) * VAR_13;
 }
}
