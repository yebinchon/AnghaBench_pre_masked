
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ len; int str; } ;
typedef TYPE_2__ substr_t ;
struct TYPE_6__ {scalar_t__ len; int str; } ;
struct TYPE_8__ {TYPE_1__ path; } ;
typedef TYPE_3__ cookie_container_t ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_1(cookie_container_t *VAR_0, substr_t VAR_1)
{
    return VAR_1.len >= VAR_0->path.len && !FUNC_0(VAR_0->path.str, VAR_1.str, VAR_0->path.len);
}
