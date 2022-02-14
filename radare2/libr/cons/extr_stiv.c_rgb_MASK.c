
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ,int) ;

__attribute__((used)) static int FUNC_1(int VAR_0, int VAR_1, int VAR_2) {
 VAR_0 = FUNC_0 (VAR_0, 0, 255);
 VAR_1 = FUNC_0 (VAR_1, 0, 255);
 VAR_2 = FUNC_0 (VAR_2, 0, 255);
 VAR_0 = (int)(VAR_0/50.6);
 VAR_1 = (int)(VAR_1/50.6);
 VAR_2 = (int)(VAR_2/50.6);
 return 16 + (VAR_0*36) + (VAR_1*6) + VAR_2;
}
