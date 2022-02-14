
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_6__ {int off; } ;
struct TYPE_5__ {int buf; int fd; scalar_t__ rawio; } ;
typedef TYPE_1__ RIOMMapFileObj ;
typedef TYPE_2__ RIO ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static ut64 FUNC_2(RIO *VAR_1, RIOMMapFileObj *VAR_2, ut64 VAR_3, int VAR_4) {
 if (!VAR_2) {
  return VAR_0;
 }
 if (VAR_2->rawio) {
  VAR_1->off = FUNC_0 (VAR_2->fd, VAR_3, VAR_4);
  return VAR_1->off;
 }
 if (!VAR_2->buf) {
  return VAR_0;
 }
 VAR_1->off = FUNC_1 (VAR_2->buf, VAR_3, VAR_4);
 return VAR_1->off;
}
