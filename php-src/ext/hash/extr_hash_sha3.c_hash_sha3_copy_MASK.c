
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hashinstance; } ;
typedef TYPE_1__ PHP_SHA3_CTX ;
typedef int Keccak_HashInstance ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(const void *VAR_1, void *VAR_2, void *VAR_3)
{
 PHP_SHA3_CTX* VAR_4 = (PHP_SHA3_CTX*)VAR_2;
 PHP_SHA3_CTX* VAR_5 = (PHP_SHA3_CTX*)VAR_3;
 FUNC_0(VAR_5->hashinstance, VAR_4->hashinstance, sizeof(Keccak_HashInstance));
 return VAR_0;
}
