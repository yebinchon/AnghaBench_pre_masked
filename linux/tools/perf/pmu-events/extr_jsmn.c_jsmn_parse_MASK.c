
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef void* jsmntype_t ;
struct TYPE_12__ {size_t start; int end; int size; void* type; } ;
typedef TYPE_1__ jsmntok_t ;
typedef int jsmnerr_t ;
struct TYPE_13__ {size_t pos; int toksuper; int toknext; } ;
typedef TYPE_2__ jsmn_parser ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 (TYPE_2__*,TYPE_1__*,unsigned int) ;
 int FUNC_1 (TYPE_2__*,char const*,size_t,TYPE_1__*,unsigned int) ;
 int FUNC_2 (TYPE_2__*,char const*,size_t,TYPE_1__*,unsigned int) ;

jsmnerr_t FUNC_3(jsmn_parser *VAR_6, const char *VAR_7, size_t VAR_8,
       jsmntok_t *VAR_9, unsigned int VAR_10)
{
 jsmnerr_t VAR_11;
 int VAR_12;
 jsmntok_t *VAR_13;

 for (; VAR_6->pos < VAR_8; VAR_6->pos++) {
  char VAR_14;
  jsmntype_t VAR_15;

  VAR_14 = VAR_7[VAR_6->pos];
  switch (VAR_14) {
  case '{':
  case '[':
   VAR_13 = FUNC_0(VAR_6, VAR_9, VAR_10);
   if (VAR_13 == ((void*)0))
    return VAR_2;
   if (VAR_6->toksuper != -1)
    VAR_9[VAR_6->toksuper].size++;
   VAR_13->type = (VAR_14 == '{' ? VAR_4 : VAR_0);
   VAR_13->start = VAR_6->pos;
   VAR_6->toksuper = VAR_6->toknext - 1;
   break;
  case '}':
  case ']':
   VAR_15 = (VAR_14 == '}' ? VAR_4 : VAR_0);
   for (VAR_12 = VAR_6->toknext - 1; VAR_12 >= 0; VAR_12--) {
    VAR_13 = &VAR_9[VAR_12];
    if (VAR_13->start != -1 && VAR_13->end == -1) {
     if (VAR_13->type != VAR_15)
      return VAR_1;
     VAR_6->toksuper = -1;
     VAR_13->end = VAR_6->pos + 1;
     break;
    }
   }

   if (VAR_12 == -1)
    return VAR_1;
   for (; VAR_12 >= 0; VAR_12--) {
    VAR_13 = &VAR_9[VAR_12];
    if (VAR_13->start != -1 && VAR_13->end == -1) {
     VAR_6->toksuper = VAR_12;
     break;
    }
   }
   break;
  case '\"':
   VAR_11 = FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9,
           VAR_10);
   if (VAR_11 < 0)
    return VAR_11;
   if (VAR_6->toksuper != -1)
    VAR_9[VAR_6->toksuper].size++;
   break;
  case '\t':
  case '\r':
  case '\n':
  case ':':
  case ',':
  case ' ':
   break;
  default:

   VAR_11 = FUNC_1(VAR_6, VAR_7, VAR_8, VAR_9,
       VAR_10);
   if (VAR_11 < 0)
    return VAR_11;
   if (VAR_6->toksuper != -1)
    VAR_9[VAR_6->toksuper].size++;
   break;






  }
 }

 for (VAR_12 = VAR_6->toknext - 1; VAR_12 >= 0; VAR_12--) {

  if (VAR_9[VAR_12].start != -1 && VAR_9[VAR_12].end == -1)
   return VAR_3;
 }

 return VAR_5;
}
