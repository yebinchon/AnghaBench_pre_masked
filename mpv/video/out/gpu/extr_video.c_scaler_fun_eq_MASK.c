
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scaler_fun {scalar_t__ blur; scalar_t__ taper; int * params; scalar_t__ name; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static bool FUNC_2(struct scaler_fun VAR_0, struct scaler_fun VAR_1)
{
    if ((VAR_0.name && !VAR_1.name) || (VAR_1.name && !VAR_0.name))
        return 0;

    return ((!VAR_0.name && !VAR_1.name) || FUNC_1(VAR_0.name, VAR_1.name) == 0) &&
           FUNC_0(VAR_0.params[0], VAR_1.params[0]) &&
           FUNC_0(VAR_0.params[1], VAR_1.params[1]) &&
           VAR_0.blur == VAR_1.blur &&
           VAR_0.taper == VAR_1.taper;
}
