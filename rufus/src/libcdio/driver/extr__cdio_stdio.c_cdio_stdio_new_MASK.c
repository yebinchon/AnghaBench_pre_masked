
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct CDIO_STAT_STRUCT {int st_size; } ;
struct TYPE_6__ {int free; int close; int read; int stat; int seek; int open; int * member_5; int * member_4; int * member_3; int * member_2; int * member_1; int * member_0; } ;
typedef TYPE_1__ cdio_stream_io_functions ;
struct TYPE_7__ {char* pathname; int st_size; } ;
typedef TYPE_2__ _UserData ;
typedef int CdioDataSource_t ;


 int FUNC_0 (char*,struct CDIO_STAT_STRUCT*) ;
 char* FUNC_1 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_2 (int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_6 (char*,char*,int ) ;
 int VAR_6 ;
 int FUNC_7 (int ) ;

CdioDataSource_t *
FUNC_8(const char VAR_7[])
{
  CdioDataSource_t *VAR_8 = ((void*)0);
  cdio_stream_io_functions VAR_9 = { ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0) };
  _UserData *VAR_10 = ((void*)0);
  struct CDIO_STAT_STRUCT VAR_11;
  char* VAR_12;

  if (VAR_7 == ((void*)0))
    return ((void*)0);


  VAR_12 = FUNC_1(VAR_7);
  if (VAR_12 == ((void*)0))
    return ((void*)0);

  if (FUNC_0 (VAR_12, &VAR_11) == -1)
    {
      FUNC_6 ("could not retrieve file info for `%s': %s",
                 VAR_12, FUNC_7 (VAR_6));
      FUNC_4(VAR_12);
      return ((void*)0);
    }

  VAR_10 = FUNC_2 (1, sizeof (_UserData));
  FUNC_3 (VAR_10 != ((void*)0));

  VAR_10->pathname = VAR_12;
  VAR_10->st_size = VAR_11.st_size;

  VAR_9.open = VAR_2;
  VAR_9.seek = VAR_4;
  VAR_9.stat = VAR_5;
  VAR_9.read = VAR_3;
  VAR_9.close = VAR_0;
  VAR_9.free = VAR_1;

  VAR_8 = FUNC_5(VAR_10, &VAR_9);

  return VAR_8;
}
