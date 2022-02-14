
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int jsmntok_t ;
typedef int jsmnerr_t ;
struct TYPE_4__ {int pos; } ;
typedef TYPE_1__ jsmn_parser ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (TYPE_1__*,int *,size_t) ;
 int FUNC_1 (int *,int ,int,int) ;

__attribute__((used)) static jsmnerr_t FUNC_2(jsmn_parser *VAR_5, const char *VAR_6,
          size_t VAR_7,
          jsmntok_t *VAR_8, size_t VAR_9)
{
 jsmntok_t *VAR_10;
 int VAR_11;

 VAR_11 = VAR_5->pos;

 for (; VAR_5->pos < VAR_7; VAR_5->pos++) {
  switch (VAR_6[VAR_5->pos]) {





  case ':':

  case '\t':
  case '\r':
  case '\n':
  case ' ':
  case ',':
  case ']':
  case '}':
   goto found;
  default:
   break;
  }
  if (VAR_6[VAR_5->pos] < 32 || VAR_6[VAR_5->pos] >= 127) {
   VAR_5->pos = VAR_11;
   return VAR_0;
  }
 }
found:
 VAR_10 = FUNC_0(VAR_5, VAR_8, VAR_9);
 if (VAR_10 == ((void*)0)) {
  VAR_5->pos = VAR_11;
  return VAR_1;
 }
 FUNC_1(VAR_10, VAR_3, VAR_11, VAR_5->pos);
 VAR_5->pos--;
 return VAR_4;
}
