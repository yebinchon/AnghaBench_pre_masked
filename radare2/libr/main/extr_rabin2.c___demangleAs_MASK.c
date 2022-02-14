
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int demanglercmd; } ;
 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 char* FUNC_1 (int *,int ,int ) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 char* FUNC_4 (int *,int ) ;
 char* FUNC_5 (int *,int ,int ) ;
 char* FUNC_6 (int ,int) ;

__attribute__((used)) static char *FUNC_7(int VAR_2) {
 bool VAR_3 = VAR_0? VAR_0->demanglercmd: 0;
 char *VAR_4 = ((void*)0);
 switch (VAR_2) {
 case 133: VAR_4 = FUNC_1 (((void*)0), VAR_1, 0); break;
 case 132: VAR_4 = FUNC_2 (VAR_1); break;
 case 130: VAR_4 = FUNC_4 (((void*)0), VAR_1); break;
 case 128: VAR_4 = FUNC_6 (VAR_1, VAR_3); break;
 case 131: VAR_4 = FUNC_3 (VAR_1); break;
 case 129: VAR_4 = FUNC_5 (((void*)0), VAR_1, 0); break;
 default:
  FUNC_0 ("Unsupported demangler\n");
  break;
 }
 return VAR_4;
}
