
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_5__ {scalar_t__ data; } ;
struct TYPE_4__ {int * buf; } ;
typedef TYPE_1__ RIOGzip ;
typedef TYPE_2__ RIODesc ;



__attribute__((used)) static inline ut8* FUNC_0(RIODesc *VAR_0) {
 if (!VAR_0) {
  return ((void*)0);
 }
 RIOGzip *VAR_1 = (RIOGzip*)VAR_0->data;
 return VAR_1->buf;
}
