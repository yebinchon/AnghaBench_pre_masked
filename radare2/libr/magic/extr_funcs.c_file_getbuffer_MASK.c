
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
typedef int ut8 ;
typedef int mbstate_t ;
struct TYPE_5__ {char const* buf; char* pbuf; } ;
struct TYPE_6__ {int flags; TYPE_1__ o; scalar_t__ haderr; } ;
typedef TYPE_2__ RMagic ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*,size_t) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 size_t FUNC_5 (int *,char*,size_t,int *) ;
 int FUNC_6 (char*,char*,size_t) ;
 int FUNC_7 (int *,int ,int) ;
 char* FUNC_8 (char*,size_t) ;
 size_t FUNC_9 (char const*) ;

const char *FUNC_10(RMagic *VAR_2) {
 char *VAR_3, *VAR_4, *VAR_5;
 size_t VAR_6, VAR_7;

 if (VAR_2->haderr) {
  return ((void*)0);
 }

 if (VAR_2->flags & VAR_0) {
  return VAR_2->o.buf;
 }

 if (!VAR_2->o.buf) {
  FUNC_1 ("ms->o.buf = NULL\n");
  return ((void*)0);
 }


 VAR_7 = FUNC_9 (VAR_2->o.buf);
 if (VAR_7 > (VAR_1 - 1) / 4) {
  FUNC_2 (VAR_2, VAR_7);
  return ((void*)0);
 }
 VAR_6 = VAR_7 * 4 + 1;
 if (!(VAR_3 = FUNC_8 (VAR_2->o.pbuf, VAR_6))) {
  FUNC_2 (VAR_2, VAR_6);
  return ((void*)0);
 }
 VAR_2->o.pbuf = VAR_3;



 {
  mbstate_t VAR_8;
  wchar_t VAR_9;
  int VAR_10 = 1;
  size_t VAR_11;
  char *VAR_12;
  (void)FUNC_7(&VAR_8, 0, sizeof(mbstate_t));

  VAR_5 = VAR_2->o.pbuf;
  VAR_4 = VAR_2->o.buf;
  VAR_12 = VAR_4 + VAR_7;

  while (VAR_4 < VAR_12) {
   VAR_11 = FUNC_5(&VAR_9, VAR_4,
       (size_t)(VAR_12 - VAR_4), &VAR_8);
   if (VAR_11 == (size_t)(-1) ||
       VAR_11 == (size_t)(-2)) {
    VAR_10 = 0;
    break;
   }

   if (FUNC_4(VAR_9)) {
    (void)FUNC_6(VAR_5, VAR_4, VAR_11);
    VAR_4 += VAR_11;
    VAR_5 += VAR_11;
   } else {
    while (VAR_11-- > 0) {
     FUNC_0 (VAR_5, VAR_4);
    }
   }
  }
  *VAR_5 = '\0';


  if (VAR_10 != 0) {
   return VAR_2->o.pbuf;
  }
 }

 for (VAR_5 = VAR_2->o.pbuf, VAR_4 = VAR_2->o.buf; *VAR_4; VAR_4++) {
  if (FUNC_3 ((ut8)*VAR_4)) {
   *VAR_5++ = *VAR_4;
  } else {
   FUNC_0 (VAR_5, VAR_4);
  }
 }
 *VAR_5 = '\0';
 return VAR_2->o.pbuf;
}
