
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int process_t ;


 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static bool
FUNC_2(const char *VAR_0, uint16_t VAR_1) {
    process_t VAR_2 = FUNC_0(VAR_0, VAR_1);
    return FUNC_1(VAR_2, "adb forward --remove");
}
