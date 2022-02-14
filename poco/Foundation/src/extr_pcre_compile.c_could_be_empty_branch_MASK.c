
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t const* group; struct TYPE_5__* prev; } ;
typedef TYPE_1__ recurse_check ;
typedef size_t pcre_uchar ;
struct TYPE_6__ {size_t* start_code; size_t* start_workspace; size_t const* hwm; } ;
typedef TYPE_2__ compile_data ;
typedef void* BOOL ;


 void* VAR_0 ;
 size_t FUNC_0 (size_t const*,int) ;
 int FUNC_1 (size_t const*,int) ;
 int FUNC_2 (size_t const) ;
 int FUNC_3 (size_t const) ;
 int VAR_1 ;
 int VAR_2 ;





 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;



 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 int VAR_21 ;
 int* FUNC_4 (int ) ;
 void* VAR_22 ;
 size_t* FUNC_5 (size_t const*,void*) ;

__attribute__((used)) static BOOL
FUNC_6(const pcre_uchar *VAR_23, const pcre_uchar *VAR_24,
  BOOL VAR_25, compile_data *VAR_26, recurse_check *VAR_27)
{
register pcre_uchar VAR_28;
recurse_check VAR_29;

for (VAR_23 = FUNC_5(VAR_23 + FUNC_4(VAR_21)[*VAR_23], VAR_22);
     VAR_23 < VAR_24;
     VAR_23 = FUNC_5(VAR_23 + FUNC_4(VAR_21)[VAR_28], VAR_22))
  {
  const pcre_uchar *VAR_30;

  VAR_28 = *VAR_23;




  if (VAR_28 == VAR_3)
    {
    do VAR_23 += FUNC_0(VAR_23, 1); while (*VAR_23 == 236);
    VAR_28 = *VAR_23;
    continue;
    }
  if (VAR_28 == VAR_14)
    {
    const pcre_uchar *VAR_31 = VAR_26->start_code + FUNC_0(VAR_23, 1);
    const pcre_uchar *VAR_32 = VAR_31;
    BOOL VAR_33;





    if (VAR_26->start_workspace != ((void*)0))
      {
      const pcre_uchar *VAR_34;
      for (VAR_34 = VAR_26->start_workspace; VAR_34 < VAR_26->hwm; VAR_34 += VAR_2)
        if ((int)FUNC_0(VAR_34, 0) == (int)(VAR_23 + 1 - VAR_26->start_code)) return VAR_22;
      if (FUNC_0(VAR_31, 1) == 0) return VAR_22;
      }






    do VAR_32 += FUNC_0(VAR_32, 1); while (*VAR_32 == 236);
    if (VAR_23 >= VAR_31 && VAR_23 <= VAR_32) continue;
    else
      {
      recurse_check *VAR_35 = VAR_27;
      for (VAR_35 = VAR_27; VAR_35 != ((void*)0); VAR_35 = VAR_35->prev)
        if (VAR_35->group == VAR_31) break;
      if (VAR_35 != ((void*)0)) continue;
      }




    VAR_33 = VAR_0;
    VAR_29.prev = VAR_27;
    VAR_29.group = VAR_31;

    do
      {
      if (FUNC_6(VAR_31, VAR_24, VAR_25, VAR_26, &VAR_29))
        {
        VAR_33 = VAR_22;
        break;
        }
      VAR_31 += FUNC_0(VAR_31, 1);
      }
    while (*VAR_31 == 236);

    if (!VAR_33) return VAR_0;
    continue;
    }



  if (VAR_28 == VAR_8 || VAR_28 == VAR_5 || VAR_28 == VAR_20 ||
      VAR_28 == VAR_7)
    {
    VAR_23 += FUNC_4(VAR_21)[VAR_28];
    do VAR_23 += FUNC_0(VAR_23, 1); while (*VAR_23 == 236);
    VAR_28 = *VAR_23;
    continue;
    }




  if (VAR_28 == VAR_15 || VAR_28 == VAR_16 ||
      VAR_28 == VAR_17 || VAR_28 == VAR_18)
    {
    do VAR_23 += FUNC_0(VAR_23, 1); while (*VAR_23 == 236);
    VAR_28 = *VAR_23;
    continue;
    }



  if (VAR_28 == VAR_4 || VAR_28 == VAR_6 ||
      VAR_28 == VAR_9 || VAR_28 == VAR_10 ||
      VAR_28 == VAR_12 || VAR_28 == VAR_13 ||
      VAR_28 == VAR_11 || VAR_28 == VAR_19)
    {
    BOOL VAR_36;
    if (FUNC_0(VAR_23, 1) == 0) return VAR_22;





    if (VAR_28 == VAR_11 && VAR_23[FUNC_0(VAR_23, 1)] != 236)
      VAR_23 += FUNC_0(VAR_23, 1);
    else
      {
      VAR_36 = VAR_0;
      do
        {
        if (!VAR_36 && FUNC_6(VAR_23, VAR_24, VAR_25, VAR_26,
          VAR_27)) VAR_36 = VAR_22;
        VAR_23 += FUNC_0(VAR_23, 1);
        }
      while (*VAR_23 == 236);
      if (!VAR_36) return VAR_0;
      }

    VAR_28 = *VAR_23;
    continue;
    }



  switch (VAR_28)
    {







    case 128:
    VAR_30 = VAR_23 += FUNC_0(VAR_23, 1);
    goto CHECK_CLASS_REPEAT;


    case 230:
    case 199:
    VAR_30 = VAR_23 + FUNC_4(VAR_21)[230];


    CHECK_CLASS_REPEAT:


    switch (*VAR_30)
      {
      case 218:
      case 226:
      case 220:
      case 228:
      case 221:
      case 223:
      break;

      default:
      case 225:
      case 229:
      case 224:
      return VAR_0;

      case 219:
      case 227:
      case 222:
      if (FUNC_1(VAR_30, 1) > 0) return VAR_0;
      break;
      }
    break;



    case 235:
    case 237:
    case 234:

    case 154:
    case 176:
    case 233:

    case 168:
    case 213:
    case 167:
    case 131:
    case 214:

    case 169:
    case 217:
    case 166:
    case 130:
    case 165:
    case 129:

    case 232:
    case 231:
    case 198:
    case 195:

    case 164:
    case 163:
    case 207:
    case 206:

    case 186:
    case 185:
    case 194:
    case 193:

    case 162:
    case 161:
    case 184:
    case 183:

    case 216:
    case 215:
    case 197:
    case 196:

    case 141:
    case 145:
    case 140:
    case 146:

    return VAR_0;




    case 135:
    case 143:
    case 138:
    case 136:
    case 144:
    case 139:
    if (VAR_23[1] == 154 || VAR_23[1] == 176) VAR_23 += 2;
    break;



    case 134:
    case 142:
    case 137:
    if (VAR_23[1 + VAR_1] == 154 || VAR_23[1 + VAR_1] == 176)
      VAR_23 += 2;
    break;



    case 212:
    case 211:
    case 210:
    case 209:
    case 236:
    return VAR_22;
    case 208:
    case 153:
    case 150:
    case 147:
    VAR_23 += VAR_23[1];
    break;



    default:
    break;
    }
  }

return VAR_22;
}
