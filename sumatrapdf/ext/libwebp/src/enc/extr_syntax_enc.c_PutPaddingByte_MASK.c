
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int (* writer ) (int const*,int,TYPE_1__ const* const) ;} ;
typedef TYPE_1__ WebPPicture ;


 int FUNC_0 (int const*,int,TYPE_1__ const* const) ;

__attribute__((used)) static int FUNC_1(const WebPPicture* const VAR_0) {
  const uint8_t VAR_1[1] = { 0 };
  return !!VAR_0->writer(VAR_1, 1, VAR_0);
}
