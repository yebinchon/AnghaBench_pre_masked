
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HANDLE ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (char*,int,int,int *,int ,int ,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,char,int ) ;

__attribute__((used)) static BOOL FUNC_5(char VAR_8)
{
 HANDLE VAR_9 = VAR_6;
 BOOL VAR_10 = VAR_0;
 char VAR_11[] = "\\\\.\\#:";

 VAR_11[4] = VAR_8;
 VAR_9 = FUNC_0(VAR_11, VAR_4|VAR_5, VAR_2|VAR_3,
  ((void*)0), VAR_7, VAR_1, ((void*)0));
 if (VAR_9 == VAR_6) {
  FUNC_4("Failed to open %c: for flushing: %s", VAR_8, FUNC_2());
  goto out;
 }
 VAR_10 = FUNC_1(VAR_9);
 if (VAR_10 == VAR_0)
  FUNC_4("Failed to flush %c: %s", VAR_8, FUNC_2());

out:
 FUNC_3(VAR_9);
 return VAR_10;
}
