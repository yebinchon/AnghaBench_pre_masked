
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scaler_config {scalar_t__ radius; scalar_t__ clamp; int window; int kernel; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct scaler_config VAR_0, struct scaler_config VAR_1)
{


    return FUNC_0(VAR_0.kernel, VAR_1.kernel) &&
           FUNC_0(VAR_0.window, VAR_1.window) &&
           VAR_0.radius == VAR_1.radius &&
           VAR_0.clamp == VAR_1.clamp;
}
