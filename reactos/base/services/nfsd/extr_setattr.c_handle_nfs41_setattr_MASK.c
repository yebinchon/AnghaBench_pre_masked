
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_15__ ;


typedef int stateid_arg ;
struct TYPE_18__ {int ctime; TYPE_4__* state; int buf; } ;
typedef TYPE_2__ setattr_upcall_args ;
struct TYPE_19__ {int time_delta; scalar_t__ cansettime; } ;
typedef TYPE_3__ nfs41_superblock ;
struct TYPE_17__ {int fileid; TYPE_3__* superblock; } ;
struct TYPE_24__ {TYPE_1__ fh; } ;
struct TYPE_20__ {TYPE_9__ file; int session; } ;
typedef TYPE_4__ nfs41_open_state ;
struct TYPE_23__ {int count; int * arr; } ;
struct TYPE_21__ {int hidden; int system; int archive; int mode; int change; TYPE_8__ attrmask; int time_modify; int time_access; int time_create; int * time_delta; int member_0; } ;
typedef TYPE_5__ nfs41_file_info ;
struct TYPE_16__ {scalar_t__ QuadPart; } ;
struct TYPE_22__ {int FileAttributes; TYPE_15__ LastWriteTime; TYPE_15__ LastAccessTime; TYPE_15__ CreationTime; } ;
typedef TYPE_6__* PFILE_BASIC_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (TYPE_15__*,int *) ;
 int FUNC_2 (int ,int ,TYPE_5__*) ;
 int FUNC_3 (int ,TYPE_9__*,int ,int ) ;
 int FUNC_4 (TYPE_4__*,int *) ;
 int FUNC_5 (int ,TYPE_9__*,int *,TYPE_5__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_8__*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(setattr_upcall_args *VAR_15)
{
    PFILE_BASIC_INFO VAR_16 = (PFILE_BASIC_INFO)VAR_15->buf;
    nfs41_open_state *VAR_17 = VAR_15->state;
    nfs41_superblock *VAR_18 = VAR_17->file.fh.superblock;
    stateid_arg VAR_19;
    nfs41_file_info VAR_20 = { 0 }, VAR_21 = { 0 };
    int VAR_22 = VAR_13, VAR_23;

 if (VAR_16->FileAttributes) {
  VAR_20.hidden = VAR_16->FileAttributes & VAR_10 ? 1 : 0;
  VAR_20.system = VAR_16->FileAttributes & VAR_12 ? 1 : 0;
  VAR_20.archive = VAR_16->FileAttributes & VAR_9 ? 1 : 0;
  VAR_23 = FUNC_2(FUNC_9(VAR_17->session),
   VAR_17->file.fh.fileid, &VAR_21);

  if (VAR_23 || VAR_20.hidden != VAR_21.hidden) {
   VAR_20.attrmask.arr[0] = VAR_3;
   VAR_20.attrmask.count = 1;
  }
  if (VAR_23 || VAR_20.archive != VAR_21.archive) {
   VAR_20.attrmask.arr[0] |= VAR_2;
   VAR_20.attrmask.count = 1;
  }
  if (VAR_23 || VAR_20.system != VAR_21.system) {
   VAR_20.attrmask.arr[1] = VAR_5;
   VAR_20.attrmask.count = 2;
  }
 }
    if (VAR_21.mode == 0444 &&
            ((VAR_16->FileAttributes & VAR_11) == 0)) {
        VAR_20.mode = 0644;
        VAR_20.attrmask.arr[1] |= VAR_4;
        VAR_20.attrmask.count = 2;
    }

    if (VAR_18->cansettime) {


        VAR_20.time_delta = &VAR_18->time_delta;


        if (VAR_16->CreationTime.QuadPart > 0) {
            FUNC_1(&VAR_16->CreationTime,
                &VAR_20.time_create);
            VAR_20.attrmask.arr[1] |= VAR_7;
            VAR_20.attrmask.count = 2;
        }

        if (VAR_16->LastAccessTime.QuadPart > 0) {
            FUNC_1(&VAR_16->LastAccessTime,
                &VAR_20.time_access);
            VAR_20.attrmask.arr[1] |= VAR_6;
            VAR_20.attrmask.count = 2;
        }

        if (VAR_16->LastWriteTime.QuadPart > 0) {
            FUNC_1(&VAR_16->LastWriteTime,
                &VAR_20.time_modify);
            VAR_20.attrmask.arr[1] |= VAR_8;
            VAR_20.attrmask.count = 2;
        }
    }


    if (VAR_16->FileAttributes & VAR_11) {
        VAR_20.mode = 0444;
        VAR_20.attrmask.arr[1] |= VAR_4;
        VAR_20.attrmask.count = 2;
    }


    FUNC_6(VAR_18, &VAR_20.attrmask);

    if (!VAR_20.attrmask.count)
        goto out;


    FUNC_3(VAR_17->session, &VAR_17->file,
        VAR_14, VAR_1);

    FUNC_4(VAR_17, &VAR_19);

    VAR_22 = FUNC_5(VAR_17->session, &VAR_17->file, &VAR_19, &VAR_20);
    if (VAR_22) {
        FUNC_0(1, "nfs41_setattr() failed with error %s.\n",
            FUNC_7(VAR_22));
        VAR_22 = FUNC_8(VAR_22, VAR_0);
    }
    VAR_15->ctime = VAR_20.change;
out:
    return VAR_22;
}
