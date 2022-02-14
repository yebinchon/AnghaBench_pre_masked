
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int,char*) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int
FUNC_2(bool VAR_1, const char *VAR_2) {
 int VAR_3;

 VAR_3 = FUNC_1("/dev/null", VAR_0);
 FUNC_0(VAR_3, -1, "Unexpected open() failure");

 return VAR_3;
}
