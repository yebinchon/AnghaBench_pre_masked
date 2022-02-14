
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct buf_bytes_priv {int buf; scalar_t__ is_bufowner; } ;
struct TYPE_4__ {int priv; } ;
typedef TYPE_1__ RBuffer ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct buf_bytes_priv* FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_3(RBuffer *VAR_0) {
 struct buf_bytes_priv *VAR_1 = FUNC_2 (VAR_0);
 if (VAR_1->is_bufowner) {
  FUNC_1 (VAR_1->buf);
 }
 FUNC_0 (VAR_0->priv);
 return 1;
}
