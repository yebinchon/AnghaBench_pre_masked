
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* data; } ;
typedef TYPE_1__ fcgi_hash ;
struct TYPE_5__ {scalar_t__ pos; scalar_t__ end; scalar_t__ data; struct TYPE_5__* next; } ;
typedef TYPE_2__ fcgi_data_seg ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,char*,unsigned int) ;

__attribute__((used)) static inline char* FUNC_3(fcgi_hash *VAR_1, char *VAR_2, unsigned int VAR_3)
{
 char *VAR_4;

 if (FUNC_0(VAR_1->data->pos + VAR_3 + 1 >= VAR_1->data->end)) {
  unsigned int VAR_5 = (VAR_3 + 1 > VAR_0) ? VAR_3 + 1 : VAR_0;
  fcgi_data_seg *VAR_6 = (fcgi_data_seg*)FUNC_1(sizeof(fcgi_data_seg) - 1 + VAR_5);

  VAR_6->pos = VAR_6->data;
  VAR_6->end = VAR_6->pos + VAR_5;
  VAR_6->next = VAR_1->data;
  VAR_1->data = VAR_6;
 }
 VAR_4 = VAR_1->data->pos;
 FUNC_2(VAR_4, VAR_2, VAR_3);
 VAR_4[VAR_3] = 0;
 VAR_1->data->pos += VAR_3 + 1;
 return VAR_4;
}
