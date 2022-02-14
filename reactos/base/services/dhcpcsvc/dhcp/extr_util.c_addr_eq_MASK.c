
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iaddr {scalar_t__ len; int iabuf; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;

int FUNC_1( struct iaddr VAR_0, struct iaddr VAR_1 ) {
    return VAR_0.len == VAR_1.len && !FUNC_0( VAR_0.iabuf, VAR_1.iabuf, VAR_0.len );
}
