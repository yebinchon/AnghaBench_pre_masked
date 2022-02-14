
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int WORD ;
typedef int UINT ;
struct TYPE_9__ {int fs_type; int* win; int fsize; int n_fats; int csize; int n_rootdir; int n_fatent; int volbase; int fatbase; int database; int dirbase; int last_clust; int free_clust; int fsi_flag; scalar_t__ cdir; scalar_t__ id; int drv; } ;
typedef int TCHAR ;
typedef scalar_t__ FRESULT ;
typedef TYPE_1__ FATFS ;
typedef int DWORD ;
typedef int DSTATUS ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 TYPE_1__** VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int ,int*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int const**) ;
 scalar_t__ FUNC_12 (TYPE_1__*,int) ;

__attribute__((used)) static
FRESULT FUNC_13 (
 FATFS** VAR_40,
 const TCHAR** VAR_41,
 BYTE VAR_42
)
{
 BYTE VAR_43, *VAR_44;
 int VAR_45;
 DSTATUS VAR_46;
 DWORD VAR_47, VAR_48, VAR_49, VAR_50, VAR_51, VAR_52, VAR_53[4];
 WORD VAR_54;
 FATFS *VAR_55;
 UINT VAR_56;



 *VAR_40 = 0;
 VAR_45 = FUNC_11(VAR_41);
 if (VAR_45 < 0) return VAR_13;


 VAR_55 = VAR_26[VAR_45];
 if (!VAR_55) return VAR_14;

 FUNC_0(VAR_55);
 *VAR_40 = VAR_55;

 if (VAR_55->fs_type) {
  VAR_46 = FUNC_10(VAR_55->drv);
  if (!(VAR_46 & VAR_33)) {
   if (!VAR_37 && VAR_42 && (VAR_46 & VAR_34))
    return VAR_18;
   return VAR_17;
  }
 }




 VAR_55->fs_type = 0;
 VAR_55->drv = FUNC_1(VAR_45);
 VAR_46 = FUNC_8(VAR_55->drv);
 if (VAR_46 & VAR_33)
  return VAR_15;
 if (!VAR_37 && VAR_42 && (VAR_46 & VAR_34))
  return VAR_18;





 VAR_47 = 0;
 VAR_43 = FUNC_6(VAR_55, VAR_47);
 if (VAR_43 == 1 || (!VAR_43 && (FUNC_2(VAR_45)))) {
  for (VAR_56 = 0; VAR_56 < 4; VAR_56++) {
   VAR_44 = VAR_55->win + VAR_29 + VAR_56 * VAR_36;
   VAR_53[VAR_56] = VAR_44[4] ? FUNC_3(&VAR_44[8]) : 0;
  }
  VAR_56 = FUNC_2(VAR_45);
  if (VAR_56) VAR_56--;
  do {
   VAR_47 = VAR_53[VAR_56];
   VAR_43 = VAR_47 ? FUNC_6(VAR_55, VAR_47) : 2;
  } while (!FUNC_2(VAR_45) && VAR_43 && ++VAR_56 < 4);
 }
 if (VAR_43 == 3) return VAR_12;
 if (VAR_43) return VAR_16;



 if (FUNC_4(VAR_55->win + VAR_0) != FUNC_5(VAR_55))
  return VAR_16;

 VAR_48 = FUNC_4(VAR_55->win + VAR_1);
 if (!VAR_48) VAR_48 = FUNC_3(VAR_55->win + VAR_2);
 VAR_55->fsize = VAR_48;

 VAR_55->n_fats = VAR_55->win[VAR_4];
 if (VAR_55->n_fats != 1 && VAR_55->n_fats != 2)
  return VAR_16;
 VAR_48 *= VAR_55->n_fats;

 VAR_55->csize = VAR_55->win[VAR_8];
 if (!VAR_55->csize || (VAR_55->csize & (VAR_55->csize - 1)))
  return VAR_16;

 VAR_55->n_rootdir = FUNC_4(VAR_55->win + VAR_6);
 if (VAR_55->n_rootdir % (FUNC_5(VAR_55) / VAR_35))
  return VAR_16;

 VAR_49 = FUNC_4(VAR_55->win + VAR_9);
 if (!VAR_49) VAR_49 = FUNC_3(VAR_55->win + VAR_10);

 VAR_54 = FUNC_4(VAR_55->win + VAR_7);
 if (!VAR_54) return VAR_16;


 VAR_50 = VAR_54 + VAR_48 + VAR_55->n_rootdir / (FUNC_5(VAR_55) / VAR_35);
 if (VAR_49 < VAR_50) return VAR_16;
 VAR_51 = (VAR_49 - VAR_50) / VAR_55->csize;
 if (!VAR_51) return VAR_16;
 VAR_43 = VAR_23;
 if (VAR_51 >= VAR_30) VAR_43 = VAR_24;
 if (VAR_51 >= VAR_31) VAR_43 = VAR_25;


 VAR_55->n_fatent = VAR_51 + 2;
 VAR_55->volbase = VAR_47;
 VAR_55->fatbase = VAR_47 + VAR_54;
 VAR_55->database = VAR_47 + VAR_50;
 if (VAR_43 == VAR_25) {
  if (VAR_55->n_rootdir) return VAR_16;
  VAR_55->dirbase = FUNC_3(VAR_55->win + VAR_5);
  VAR_52 = VAR_55->n_fatent * 4;
 } else {
  if (!VAR_55->n_rootdir) return VAR_16;
  VAR_55->dirbase = VAR_55->fatbase + VAR_48;
  VAR_52 = (VAR_43 == VAR_24) ?
   VAR_55->n_fatent * 2 : VAR_55->n_fatent * 3 / 2 + (VAR_55->n_fatent & 1);
 }
 if (VAR_55->fsize < (VAR_52 + (FUNC_5(VAR_55) - 1)) / FUNC_5(VAR_55))
  return VAR_16;



 VAR_55->last_clust = VAR_55->free_clust = 0xFFFFFFFF;


 VAR_55->fsi_flag = 0x80;

 if (VAR_43 == VAR_25
  && FUNC_4(VAR_55->win + VAR_3) == 1
  && FUNC_12(VAR_55, VAR_47 + 1) == VAR_17)
 {
  VAR_55->fsi_flag = 0;
  if (FUNC_4(VAR_55->win + VAR_11) == 0xAA55
   && FUNC_3(VAR_55->win + VAR_20) == 0x41615252
   && FUNC_3(VAR_55->win + VAR_22) == 0x61417272)
  {

   VAR_55->free_clust = FUNC_3(VAR_55->win + VAR_19);


   VAR_55->last_clust = FUNC_3(VAR_55->win + VAR_21);

  }
 }


 VAR_55->fs_type = VAR_43;
 VAR_55->id = ++VAR_27;







 return VAR_17;
}
