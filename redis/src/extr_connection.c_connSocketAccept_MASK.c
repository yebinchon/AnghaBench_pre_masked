
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ state; } ;
typedef TYPE_1__ connection ;
typedef int ConnectionCallbackFunc ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_1(connection *VAR_4, ConnectionCallbackFunc VAR_5) {
    if (VAR_4->state != VAR_0) return VAR_2;
    VAR_4->state = VAR_1;
    if (!FUNC_0(VAR_4, VAR_5)) return VAR_2;
    return VAR_3;
}
