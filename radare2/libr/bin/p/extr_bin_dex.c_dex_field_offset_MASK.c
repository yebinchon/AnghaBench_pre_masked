
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_4__ {scalar_t__ fields_offset; } ;
struct TYPE_5__ {TYPE_1__ header; } ;
typedef TYPE_2__ RBinDexObj ;



__attribute__((used)) static ut64 FUNC_0(RBinDexObj *VAR_0, int VAR_1) {
 return VAR_0->header.fields_offset + (VAR_1 * 8);
}
