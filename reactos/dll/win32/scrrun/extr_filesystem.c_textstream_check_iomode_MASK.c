
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct textstream {scalar_t__ mode; } ;
typedef enum iotype { ____Placeholder_iotype } iotype ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static BOOL FUNC_0(struct textstream *VAR_4, enum iotype VAR_5)
{
    if (VAR_5 == VAR_3)
        return VAR_4->mode == VAR_2 || VAR_4->mode == VAR_0;
    else
        return VAR_4->mode == VAR_1;
}
