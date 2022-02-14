
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct buf {int size; scalar_t__ data; } ;
typedef int VALUE ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 struct buf* FUNC_3 (int) ;
 int FUNC_4 (struct buf*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char const*,int ,int ) ;
 int FUNC_7 (struct buf*,int const*,int ) ;

__attribute__((used)) static VALUE FUNC_8(VALUE VAR_1, VALUE VAR_2)
{
 VALUE VAR_3;
 struct buf *VAR_4;

 FUNC_0(VAR_2, VAR_0);

 VAR_4 = FUNC_3(128);

 FUNC_7(VAR_4, (const uint8_t*)FUNC_2(VAR_2), FUNC_1(VAR_2));
 VAR_3 = FUNC_6((const char*)VAR_4->data, VAR_4->size, FUNC_5(VAR_2));

 FUNC_4(VAR_4);
 return VAR_3;
}
