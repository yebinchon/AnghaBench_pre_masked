
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int (* normal_text ) (struct buf*,struct buf*,int ) ;} ;
struct sd_markdown {int opaque; TYPE_1__ cb; } ;
struct buf {int size; int * data; int member_3; int member_2; int member_1; int member_0; } ;


 int FUNC_0 (struct buf*,int ) ;
 int * FUNC_1 (char const*,int ) ;
 int FUNC_2 (struct buf*,struct buf*,int ) ;

__attribute__((used)) static size_t
FUNC_3(struct buf *VAR_0, struct sd_markdown *VAR_1, uint8_t *VAR_2, size_t VAR_3, size_t VAR_4)
{
 static const char *VAR_5 = "\\`*_{}[]()#+-.!:|&<>^~=";
 struct buf VAR_6 = { 0, 0, 0, 0 };

 if (VAR_4 > 1) {
  if (FUNC_1(VAR_5, VAR_2[1]) == ((void*)0))
   return 0;

  if (VAR_1->cb.normal_text) {
   VAR_6.data = VAR_2 + 1;
   VAR_6.size = 1;
   VAR_1->cb.normal_text(VAR_0, &VAR_6, VAR_1->opaque);
  }
  else FUNC_0(VAR_0, VAR_2[1]);
 } else if (VAR_4 == 1) {
  FUNC_0(VAR_0, VAR_2[0]);
 }

 return 2;
}
