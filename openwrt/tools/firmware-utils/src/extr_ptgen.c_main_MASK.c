
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {char type; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (int,char**,char*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_1__* VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int VAR_12 ;

int FUNC_7 (int VAR_13, char **VAR_14)
{
 char VAR_15 = 0x83;
 int VAR_16;
 int VAR_17 = 0;
 uint32_t VAR_18 = 0x5452574F;

 while ((VAR_16 = FUNC_3(VAR_13, VAR_14, "h:s:p:a:t:o:vnl:S:")) != -1) {
  switch (VAR_16) {
  case 'o':
   VAR_3 = VAR_7;
   break;
  case 'v':
   VAR_12++;
   break;
  case 'n':
   VAR_5 = 1;
   break;
  case 'h':
   VAR_4 = (int)FUNC_4(VAR_7, ((void*)0), 0);
   break;
  case 's':
   VAR_10 = (int)FUNC_4(VAR_7, ((void*)0), 0);
   break;
  case 'p':
   if (VAR_17 > 3) {
    FUNC_1(VAR_11, "Too many partitions\n");
    FUNC_0(VAR_0);
   }
   VAR_9[VAR_17].size = FUNC_5(VAR_7);
   VAR_9[VAR_17++].type = VAR_15;
   break;
  case 't':
   VAR_15 = (char)FUNC_4(VAR_7, ((void*)0), 16);
   break;
  case 'a':
   VAR_2 = (int)FUNC_4(VAR_7, ((void*)0), 0);
   if ((VAR_2 < 0) || (VAR_2 > 4))
    VAR_2 = 0;
   break;
  case 'l':
   VAR_6 = (int)FUNC_4(VAR_7, ((void*)0), 0) * 2;
   break;
  case 'S':
   VAR_18 = FUNC_4(VAR_7, ((void*)0), 0);
   break;
  case '?':
  default:
   FUNC_6(VAR_14[0]);
  }
 }
 VAR_13 -= VAR_8;
 if (VAR_13 || (VAR_4 <= 0) || (VAR_10 <= 0) || !VAR_3)
  FUNC_6(VAR_14[0]);

 return FUNC_2(VAR_18, VAR_17) ? VAR_0 : VAR_1;
}
