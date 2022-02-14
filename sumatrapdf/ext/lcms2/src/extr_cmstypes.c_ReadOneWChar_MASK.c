
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ wchar_t ;
typedef size_t cmsUInt32Number ;
typedef int cmsUInt16Number ;
struct TYPE_7__ {int (* Seek ) (int ,TYPE_1__*,scalar_t__) ;} ;
typedef TYPE_1__ cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_8__ {scalar_t__* Offsets; int* Sizes; } ;
typedef TYPE_2__ _cmsDICelem ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__*) ;
 scalar_t__ FUNC_1 (int ,size_t) ;
 int FUNC_2 (int ,TYPE_1__*,size_t,scalar_t__*) ;
 int FUNC_3 (int ,TYPE_1__*,scalar_t__) ;

__attribute__((used)) static
cmsBool FUNC_4(cmsContext VAR_2, cmsIOHANDLER* VAR_3, _cmsDICelem* VAR_4, cmsUInt32Number VAR_5, wchar_t ** VAR_6)
{

    cmsUInt32Number VAR_7;



      if (VAR_4 -> Offsets[VAR_5] == 0) {

          *VAR_6 = ((void*)0);
          return VAR_1;
      }

      if (!VAR_3 -> Seek(VAR_2, VAR_3, VAR_4 -> Offsets[VAR_5])) return VAR_0;

      VAR_7 = VAR_4 ->Sizes[VAR_5] / sizeof(cmsUInt16Number);


      *VAR_6 = (wchar_t*) FUNC_1(VAR_2, (VAR_7 + 1) * sizeof(wchar_t));
      if (*VAR_6 == ((void*)0)) return VAR_0;

      if (!FUNC_2(VAR_2, VAR_3, VAR_7, *VAR_6)) {
          FUNC_0(VAR_2, *VAR_6);
          return VAR_0;
      }


      (*VAR_6)[VAR_7] = 0;
      return VAR_1;
}
