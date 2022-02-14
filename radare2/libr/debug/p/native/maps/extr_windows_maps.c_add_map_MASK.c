
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_4__ {int Protect; scalar_t__ Type; } ;
typedef int RList ;
typedef int RDebugMap ;
typedef TYPE_1__ MEMORY_BASIC_INFORMATION ;


 scalar_t__ VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (char*,scalar_t__,scalar_t__,int,int) ;
 int FUNC_3 (int *,int *) ;
 char* FUNC_4 (char*,char*,char const*) ;

__attribute__((used)) static RDebugMap *FUNC_5(RList *VAR_7, const char *VAR_8, ut64 VAR_9, ut64 VAR_10, MEMORY_BASIC_INFORMATION *VAR_11) {
 int VAR_12;
 char *VAR_13 = FUNC_1 (VAR_11);

 switch (VAR_11->Protect) {
 case 134:
  VAR_12 = VAR_6;
  break;
 case 133:
  VAR_12 = VAR_4;
  break;
 case 132:
  VAR_12 = VAR_3;
  break;
 case 130:
  VAR_12 = VAR_1;
  break;
 case 129:
  VAR_12 = VAR_2;
  break;
 case 128:
  VAR_12 = VAR_5;
  break;
 case 131:
  VAR_12 = VAR_6;
  break;
 default:
  VAR_12 = 0;
 }
 char *VAR_14 = FUNC_4 ("%-8s %s", VAR_13, VAR_8);
 if (!VAR_14) {
  return ((void*)0);
 }
 RDebugMap *VAR_15 = FUNC_2 (VAR_14, VAR_9, VAR_9 + VAR_10, VAR_12, VAR_11->Type == VAR_0);
 FUNC_0 (VAR_14);
 if (VAR_15) {
  FUNC_3 (VAR_7, VAR_15);
 }
 return VAR_15;
}
