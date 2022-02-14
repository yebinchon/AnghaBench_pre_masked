
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut32 ;
struct TYPE_4__ {int fd; } ;
struct TYPE_3__ {int (* cb_printf ) (char*,int ) ;} ;
typedef TYPE_1__ RPrint ;
typedef TYPE_2__ RIODesc ;


 int FUNC_0 (char*,int ) ;

__attribute__((used)) static bool FUNC_1(void *VAR_0, void *VAR_1, ut32 VAR_2) {
 RPrint *VAR_3 = (RPrint *)VAR_0;
 RIODesc *VAR_4 = (RIODesc *)VAR_1;
 VAR_3->cb_printf ("%d\n", VAR_4->fd);
 return 0;
}
