
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; } ;
struct TYPE_8__ {TYPE_1__ params; } ;
struct TYPE_7__ {float ascender; float descender; } ;
typedef TYPE_2__ FONSfont ;
typedef TYPE_3__ FONScontext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static float FUNC_0(FONScontext* VAR_5, FONSfont* VAR_6, int VAR_7, short VAR_8)
{
 if (VAR_5->params.flags & VAR_4) {
  if (VAR_7 & VAR_3) {
   return VAR_6->ascender * (float)VAR_8/10.0f;
  } else if (VAR_7 & VAR_2) {
   return (VAR_6->ascender + VAR_6->descender) / 2.0f * (float)VAR_8/10.0f;
  } else if (VAR_7 & VAR_0) {
   return 0.0f;
  } else if (VAR_7 & VAR_1) {
   return VAR_6->descender * (float)VAR_8/10.0f;
  }
 } else {
  if (VAR_7 & VAR_3) {
   return -VAR_6->ascender * (float)VAR_8/10.0f;
  } else if (VAR_7 & VAR_2) {
   return -(VAR_6->ascender + VAR_6->descender) / 2.0f * (float)VAR_8/10.0f;
  } else if (VAR_7 & VAR_0) {
   return 0.0f;
  } else if (VAR_7 & VAR_1) {
   return -VAR_6->descender * (float)VAR_8/10.0f;
  }
 }
 return 0.0;
}
