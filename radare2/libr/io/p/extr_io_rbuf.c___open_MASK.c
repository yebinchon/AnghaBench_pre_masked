
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RIODesc ;
typedef int RIO ;
typedef int RBuffer ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int * FUNC_2 (int *,int *,char const*,int,int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static RIODesc *FUNC_3(RIO *VAR_1, const char *VAR_2, int VAR_3, int VAR_4) {
 RIODesc *VAR_5;
 RBuffer *VAR_6 = FUNC_1 ();
 if (VAR_6 && (VAR_5 = FUNC_2 (VAR_1, &VAR_0, VAR_2, 7, 0, VAR_6))) {
  return VAR_5;
 }
 FUNC_0 (VAR_6);
 return ((void*)0);
}
