
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ name; } ;
struct TYPE_9__ {TYPE_5__ str_data; scalar_t__ val; } ;
struct TYPE_7__ {scalar_t__ mprop; } ;
struct TYPE_8__ {TYPE_1__ bits; int fldattr; } ;
struct TYPE_10__ {int pad; TYPE_3__ val; TYPE_2__ fldattr; scalar_t__ index; } ;
typedef TYPE_4__ SLF_ONEMETHOD ;


 int FUNC_0 (int ,unsigned int,unsigned char*,unsigned int) ;
 int FUNC_1 (unsigned int,unsigned int,int ,unsigned char*,int ) ;
 int FUNC_2 (unsigned int,unsigned int,int ,unsigned char*,int ) ;
 int FUNC_3 (unsigned int,unsigned int,scalar_t__,unsigned char*,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (TYPE_5__*,unsigned char*,unsigned int*,unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_6(SLF_ONEMETHOD *VAR_5, unsigned char *VAR_6, unsigned int *VAR_7, unsigned int VAR_8)
{
 int VAR_9 = *VAR_7, VAR_10 = 0;

 VAR_5->val.str_data.name = 0;
 VAR_5->val.val = 0;

 FUNC_2(*VAR_7, VAR_8, VAR_5->fldattr.fldattr, VAR_6, VAR_2);
 FUNC_3(*VAR_7, VAR_8, VAR_5->index, VAR_6, VAR_3);

 VAR_5->fldattr.fldattr = FUNC_4(VAR_5->fldattr.fldattr);

 if((VAR_5->fldattr.bits.mprop == VAR_0) ||
  (VAR_5->fldattr.bits.mprop == VAR_1)) {
  FUNC_3(*VAR_7, VAR_8, VAR_5->val.val, VAR_6, VAR_3);
 }

 VAR_10 = *VAR_7;
 FUNC_5(&(VAR_5->val.str_data), VAR_6, VAR_7, VAR_8);
 VAR_6 += (*VAR_7 - VAR_10);

 FUNC_1(*VAR_7, VAR_8, VAR_5->pad, VAR_6, VAR_4);
 FUNC_0(VAR_5->pad, *VAR_7, VAR_6, VAR_8);

 return (*VAR_7 - VAR_9);
}
