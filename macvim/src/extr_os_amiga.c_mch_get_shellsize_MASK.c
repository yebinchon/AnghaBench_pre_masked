
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Window {scalar_t__ Title; } ;
struct InfoData {scalar_t__ id_InUse; scalar_t__ id_VolumeNode; } ;
struct IOStdReq {scalar_t__ io_Unit; } ;
struct ConUnit {int cu_YMax; int cu_XMax; } ;
typedef int char_u ;
typedef int ULONG ;
typedef scalar_t__ BPTR ;


 scalar_t__ VAR_0 ;
 struct InfoData* FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,struct InfoData*) ;
 int FUNC_2 (int ,struct InfoData*) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (char*) ;
 int VAR_6 ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int ,long,int) ;
 int FUNC_7 (int ) ;
 int * VAR_7 ;
 int FUNC_8 () ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 struct Window* VAR_11 ;

int
FUNC_9()
{
    struct ConUnit *VAR_12;

    char VAR_13[sizeof(struct InfoData) + 3];

    struct InfoData *VAR_14=0;

    if (!VAR_10)
 goto out;






    VAR_14 = (struct InfoData *)(((long)VAR_13 + 3L) & ~3L);







    if (VAR_9)
 FUNC_4("\233t\233u");
    FUNC_8();





    if (FUNC_6(FUNC_3(VAR_8), (long)VAR_0, ((ULONG) VAR_14) >> 2) == 0
     || (VAR_11 = (struct Window *)VAR_14->id_VolumeNode) == ((void*)0))

    {


 VAR_10 = VAR_4;
 goto out;
    }
    if (VAR_7 == ((void*)0))
 VAR_7 = (char_u *)VAR_11->Title;
    if (VAR_14->id_InUse == (BPTR)((void*)0))
    {
 FUNC_7(FUNC_5("mch_get_shellsize: not a console??\n"));
 return VAR_3;
    }
    VAR_12 = (struct ConUnit *) ((struct IOStdReq *) VAR_14->id_InUse)->io_Unit;


    VAR_6 = VAR_12->cu_YMax + 1;
    VAR_1 = VAR_12->cu_XMax + 1;
    if (VAR_6 < 0 || VAR_6 > 200)
    {
 VAR_1 = 80;
 VAR_6 = 24;
 VAR_10 = VAR_4;
 return VAR_3;
    }

    return VAR_5;
out:




    return VAR_3;
}
