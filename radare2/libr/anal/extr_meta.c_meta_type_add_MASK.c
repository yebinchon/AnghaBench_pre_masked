
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut64 ;
typedef int ut32 ;
typedef int key ;
typedef int RAnal ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 scalar_t__ FUNC_1 (int ,char*,int,int ) ;
 int FUNC_2 (char*,int,char*,char,...) ;

__attribute__((used)) static int FUNC_3(RAnal *VAR_2, char VAR_3, ut64 VAR_4) {
 char VAR_5[32];
 ut32 VAR_6, VAR_7;
 FUNC_2 (VAR_5, sizeof (VAR_5)-1, "meta.%c.count", VAR_3);
 VAR_6 = (ut32)FUNC_1 (VAR_0, VAR_5, 1, 0);
 VAR_7 = VAR_6/VAR_1;

 FUNC_2 (VAR_5, sizeof (VAR_5)-1, "meta.%c.%d", VAR_3, VAR_7);
 FUNC_0 (VAR_0, VAR_5, VAR_4, 0);
 return VAR_6;
}
