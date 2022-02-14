
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ByteReader {int rar; } ;
typedef int Byte ;


 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;

__attribute__((used)) static Byte FUNC_2(void *VAR_0)
{
    struct ByteReader *VAR_1 = VAR_0;
    return FUNC_1(VAR_1->rar, 8) ? (Byte)FUNC_0(VAR_1->rar, 8) : 0xFF;
}
