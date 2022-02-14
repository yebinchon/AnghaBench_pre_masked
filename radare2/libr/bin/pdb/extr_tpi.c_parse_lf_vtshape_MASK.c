
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* vt_descriptors; int count; int pad; } ;
typedef TYPE_1__ SLF_VTSHAPE ;


 int FUNC_0 (int ,unsigned int,unsigned char*,unsigned int) ;
 int FUNC_1 (unsigned int,unsigned int,int ,unsigned char*,int ) ;
 int FUNC_2 (unsigned int,unsigned int,int,unsigned char*,int ) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 int FUNC_4 (char*,unsigned char*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(SLF_VTSHAPE *VAR_2, unsigned char *VAR_3, unsigned int *VAR_4, unsigned int VAR_5) {
 unsigned int VAR_6 = *VAR_4;
 unsigned int VAR_7;

 VAR_2->vt_descriptors = 0;

 FUNC_2(*VAR_4, VAR_5, VAR_2->count, VAR_3, VAR_0);

 VAR_7 = (4 * VAR_2->count + (VAR_2->count % 2) * 4) / 8;
 VAR_2->vt_descriptors = (char *) FUNC_3 (VAR_7);
 if (!VAR_2->vt_descriptors) {
  return 0;
 }
 FUNC_4 (VAR_2->vt_descriptors, VAR_3, VAR_7);
 VAR_3 += VAR_7;
 *VAR_4 += VAR_7;

 FUNC_1(*VAR_4, VAR_5, VAR_2->pad, VAR_3, VAR_1);
 FUNC_0 (VAR_2->pad, *VAR_4, VAR_3, VAR_5);

 return *VAR_4 - VAR_6;
}
