
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int stbi__uint8 ;
struct TYPE_3__ {scalar_t__ marker; int s; } ;
typedef TYPE_1__ jpeg ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static stbi__uint8 FUNC_1(jpeg *VAR_1)
{
   stbi__uint8 VAR_2;
   if (VAR_1->marker != VAR_0) { VAR_2 = VAR_1->marker; VAR_1->marker = VAR_0; return VAR_2; }
   VAR_2 = FUNC_0(VAR_1->s);
   if (VAR_2 != 0xff) return VAR_0;
   while (VAR_2 == 0xff)
      VAR_2 = FUNC_0(VAR_1->s);
   return VAR_2;
}
