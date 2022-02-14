
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ GLenum ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static GLenum FUNC_1(GLenum VAR_2) {
    if (VAR_2 == VAR_1) return VAR_0;
    else if (VAR_2 == VAR_0) return VAR_1;

    FUNC_0("Unhandled mapping %#x\n", VAR_2);
    return VAR_2;
}
