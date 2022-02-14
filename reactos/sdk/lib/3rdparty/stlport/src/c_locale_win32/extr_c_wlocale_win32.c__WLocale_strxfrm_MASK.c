
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned char wchar_t ;
struct TYPE_4__ {int id; } ;
struct TYPE_5__ {TYPE_1__ lc; } ;
typedef TYPE_2__ _Locale_collate_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned char const*,int,unsigned char*,int) ;
 int FUNC_1 (unsigned char*,size_t,unsigned char const*,size_t) ;

size_t FUNC_2(_Locale_collate_t* VAR_2,
                        wchar_t* VAR_3, size_t VAR_4,
                        const wchar_t* VAR_5, size_t VAR_6) {
  int VAR_7, VAR_8;


  if (VAR_6 > VAR_0) {
    if (VAR_3 != 0) {
      FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);
    }
    return VAR_6;
  }
  if (VAR_4 > VAR_0) {
    VAR_4 = VAR_0;
  }
  VAR_7 = FUNC_0(VAR_2->lc.id, VAR_1, VAR_5, (int)VAR_6, VAR_3, (int)VAR_4);
  if (VAR_7 != 0 && VAR_3 != 0) {
    for (VAR_8 = VAR_7 - 1; VAR_8 >= 0; --VAR_8) {
      VAR_3[VAR_8] = ((unsigned char*)VAR_3)[VAR_8];
    }
  }
  return VAR_7 != 0 ? VAR_7 - 1 : 0;
}
