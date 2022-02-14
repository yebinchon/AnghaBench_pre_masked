
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RIODesc ;
typedef int RIO ;
typedef int R2Pipe ;


 scalar_t__ FUNC_0 (int *,char const*,int ) ;
 int * FUNC_1 (char const*) ;
 int * FUNC_2 (int *,int *,char const*,int,int,int *) ;
 int VAR_0 ;

__attribute__((used)) static RIODesc *FUNC_3(RIO *VAR_1, const char *VAR_2, int VAR_3, int VAR_4) {
 R2Pipe *VAR_5 = ((void*)0);
 if (FUNC_0 (VAR_1, VAR_2, 0)) {
  VAR_5 = FUNC_1 (VAR_2 + 9);
 }
 return VAR_5? FUNC_2 (VAR_1, &VAR_0,
  VAR_2, VAR_3, VAR_4, VAR_5): ((void*)0);
}
