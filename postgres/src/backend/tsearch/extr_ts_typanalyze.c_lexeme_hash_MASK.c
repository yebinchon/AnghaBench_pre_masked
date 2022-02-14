
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_2__ {int length; scalar_t__ lexeme; } ;
typedef int Size ;
typedef TYPE_1__ LexemeHashKey ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned char const*,int ) ;

__attribute__((used)) static uint32
FUNC_2(const void *VAR_0, Size VAR_1)
{
 const LexemeHashKey *VAR_2 = (const LexemeHashKey *) VAR_0;

 return FUNC_0(FUNC_1((const unsigned char *) VAR_2->lexeme,
           VAR_2->length));
}
