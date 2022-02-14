
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_8__ {scalar_t__ off; } ;
struct TYPE_7__ {TYPE_1__* data; } ;
struct TYPE_6__ {int buf; } ;
typedef TYPE_1__ RIOMMapFileObj ;
typedef TYPE_2__ RIODesc ;
typedef TYPE_3__ RIO ;


 int FUNC_0 (int ,scalar_t__,int *,int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(RIO *VAR_0, RIODesc *VAR_1, ut8 *VAR_2, int VAR_3) {
 RIOMMapFileObj *VAR_4 = ((void*)0);
 if (!VAR_1 || !VAR_1->data || !VAR_2) {
  return -1;
 }
 VAR_4 = VAR_1->data;
 if (FUNC_1 (VAR_4->buf) < VAR_0->off) {
  VAR_0->off = FUNC_1 (VAR_4->buf);
 }
 return FUNC_0 (VAR_4->buf, VAR_0->off, VAR_2, VAR_3);
}
