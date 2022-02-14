
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int tag; scalar_t__ size; } ;
struct TYPE_9__ {TYPE_2__ bn; } ;
struct TYPE_8__ {TYPE_2__ bn; } ;
struct TYPE_6__ {int data; } ;
typedef TYPE_1__* PKIWI_BCRYPT_BIGNUM_Int32 ;
typedef TYPE_2__* PKIWI_BCRYPT_BIGNUM_Header ;
typedef TYPE_3__* PKIWI_BCRYPT_BIGNUM_Div ;
typedef TYPE_4__* PKIWI_BCRYPT_BIGNUM_ComplexType32 ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;
 int FUNC_2 (int ,scalar_t__,int ) ;

void FUNC_3(PKIWI_BCRYPT_BIGNUM_Header VAR_2)
{
 if(VAR_2->tag)
 {
  switch(((VAR_2->tag) >> 16) & 0xff)
  {
  case 'I':
   FUNC_2(((PKIWI_BCRYPT_BIGNUM_Int32) VAR_2)->data, VAR_2->size - FUNC_0(VAR_0, VAR_1), 0);
   break;
  case 'D':
   FUNC_3(&((PKIWI_BCRYPT_BIGNUM_Div) VAR_2)->bn);
   break;
  case 'M':
   FUNC_3(&((PKIWI_BCRYPT_BIGNUM_ComplexType32) VAR_2)->bn);
   break;
  default:
   FUNC_1(L"Unknown tag: %08x\n", VAR_2->tag);
  }
 }
}
