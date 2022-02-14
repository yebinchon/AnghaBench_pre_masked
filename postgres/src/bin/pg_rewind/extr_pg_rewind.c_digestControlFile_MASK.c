
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int xlog_seg_size; } ;
typedef TYPE_1__ ControlFileData ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (char*,char*,int ) ;
 int FUNC_4 (char*,int,...) ;

__attribute__((used)) static void
FUNC_5(ControlFileData *VAR_2, char *VAR_3, size_t VAR_4)
{
 if (VAR_4 != VAR_0)
  FUNC_4("unexpected control file size %d, expected %d",
     (int) VAR_4, VAR_0);

 FUNC_2(VAR_2, VAR_3, sizeof(ControlFileData));


 VAR_1 = VAR_2->xlog_seg_size;

 if (!FUNC_0(VAR_1))
  FUNC_4(FUNC_3("WAL segment size must be a power of two between 1 MB and 1 GB, but the control file specifies %d byte",
        "WAL segment size must be a power of two between 1 MB and 1 GB, but the control file specifies %d bytes",
        VAR_1),
     VAR_1);


 FUNC_1(VAR_2);
}
