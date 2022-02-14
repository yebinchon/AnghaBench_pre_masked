
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char magic; int bitlen; char pubexp; } ;
struct TYPE_5__ {int aiKeyAlg; scalar_t__ reserved; int bVersion; int bType; } ;
struct TYPE_7__ {TYPE_2__ RsaKey; TYPE_1__ Header; } ;
typedef int RSA_GENERICKEY_BLOB ;
typedef TYPE_3__* PRSA_GENERICKEY_BLOB ;
typedef char* PDWORD ;
typedef scalar_t__ PBYTE ;
typedef scalar_t__ LPCVOID ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;
 int VAR_5 ;

BOOL FUNC_2(LPCVOID VAR_6, DWORD VAR_7, PRSA_GENERICKEY_BLOB *VAR_8, DWORD *VAR_9)
{
 BOOL VAR_10 = VAR_2;
 DWORD VAR_11;
 PBYTE VAR_12, VAR_13;

 if(((PDWORD) VAR_6)[0] == '2ASR')
 {
  VAR_11 = ((PDWORD) VAR_6)[2];
  *VAR_9 = sizeof(RSA_GENERICKEY_BLOB) + ((VAR_11 * 9) / 16);
  if((*VAR_8 = (PRSA_GENERICKEY_BLOB) FUNC_0(VAR_3, *VAR_9)))
  {
   VAR_10 = VAR_5;
   (*VAR_8)->Header.bType = VAR_4;
   (*VAR_8)->Header.bVersion = VAR_1;
   (*VAR_8)->Header.reserved = 0;
   (*VAR_8)->Header.aiKeyAlg = VAR_0;

   (*VAR_8)->RsaKey.magic = ((PDWORD) VAR_6)[0];
   (*VAR_8)->RsaKey.bitlen = VAR_11;
   (*VAR_8)->RsaKey.pubexp = ((PDWORD) VAR_6)[4];

   VAR_12 = ((PBYTE) (*VAR_8)) + sizeof(RSA_GENERICKEY_BLOB);
   VAR_13 = (PBYTE) ((PDWORD) VAR_6 + 5);

   FUNC_1(VAR_12, VAR_13, VAR_11 / 8);
   VAR_12 += VAR_11 / 8;
   VAR_13 += (VAR_11 / 8) + 8;
   FUNC_1(VAR_12, VAR_13, VAR_11 / 16);
   VAR_12 += VAR_11 / 16;
   VAR_13 += (VAR_11 / 16) + 4;
   FUNC_1(VAR_12, VAR_13, VAR_11 / 16);
   VAR_12 += VAR_11 / 16;
   VAR_13 += (VAR_11 / 16) + 4;
   FUNC_1(VAR_12, VAR_13, VAR_11 / 16);
   VAR_12 += VAR_11 / 16;
   VAR_13 += (VAR_11 / 16) + 4;
   FUNC_1(VAR_12, VAR_13, VAR_11 / 16);
   VAR_12 += VAR_11 / 16;
   VAR_13 += (VAR_11 / 16) + 4;
   FUNC_1(VAR_12, VAR_13, VAR_11 / 16);
   VAR_12 += VAR_11 / 16;
   VAR_13 += (VAR_11 / 16) + 4;
   FUNC_1(VAR_12, VAR_13, VAR_11 / 8);
  }
 }
 return VAR_10;
}
