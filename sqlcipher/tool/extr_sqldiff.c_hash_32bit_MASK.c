
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int a; int b; } ;
typedef TYPE_1__ hash ;



__attribute__((used)) static u32 FUNC_0(hash *VAR_0){
  return (VAR_0->a & 0xffff) | (((u32)(VAR_0->b & 0xffff))<<16);
}
