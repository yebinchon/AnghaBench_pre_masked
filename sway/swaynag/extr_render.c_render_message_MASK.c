
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct swaynag {int scale; scalar_t__ height; int message; TYPE_1__* type; } ;
typedef int cairo_t ;
struct TYPE_2__ {int message_padding; int font; int text; } ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int*,int*,int *,int,int,char*,int ) ;
 int FUNC_3 (int *,int ,scalar_t__,int,char*,int ) ;

__attribute__((used)) static uint32_t FUNC_4(cairo_t *VAR_0, struct swaynag *VAR_1) {
 int VAR_2, VAR_3;
 FUNC_2(VAR_0, VAR_1->type->font, &VAR_2, &VAR_3, ((void*)0),
   VAR_1->scale, 1, "%s", VAR_1->message);

 int VAR_4 = VAR_1->type->message_padding * VAR_1->scale;

 uint32_t VAR_5 = VAR_3 + VAR_4 * 2;
 uint32_t VAR_6 = VAR_5 / VAR_1->scale;
 if (VAR_1->height < VAR_6) {
  return VAR_6;
 }

 FUNC_1(VAR_0, VAR_1->type->text);
 FUNC_0(VAR_0, VAR_4, (int)(VAR_5 - VAR_3) / 2);
 FUNC_3(VAR_0, VAR_1->type->font, VAR_1->scale, 0,
   "%s", VAR_1->message);

 return VAR_6;
}
