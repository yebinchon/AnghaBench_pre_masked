
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int wxflag; scalar_t__ handle; } ;
typedef TYPE_1__ ioinfo ;
struct TYPE_14__ {int handle; } ;
struct TYPE_13__ {unsigned int _file; int _flag; int * _tmpfname; } ;
struct TYPE_12__ {int cbReserved2; int* lpReserved2; } ;
typedef TYPE_2__ STARTUPINFOA ;
typedef scalar_t__ HANDLE ;
typedef int FILE ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (char*,int ,int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_1__ VAR_17 ;
 TYPE_5__* VAR_18 ;
 TYPE_1__* FUNC_4 (unsigned int) ;
 TYPE_6__* FUNC_5 (unsigned int) ;
 int FUNC_6 (TYPE_5__*,int ,int) ;
 unsigned int FUNC_7 (unsigned int,int) ;
 int FUNC_8 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_9 (TYPE_1__*) ;

void FUNC_10(void)
{
  STARTUPINFOA VAR_19;
  unsigned int VAR_20;
  ioinfo *VAR_21;

  FUNC_1(&VAR_19);
  if (VAR_19.cbReserved2 >= sizeof(unsigned int) && VAR_19.lpReserved2 != ((void*)0))
  {
    BYTE* VAR_22;
    HANDLE* VAR_23;
    unsigned int VAR_24;

    VAR_24 = *(unsigned*)VAR_19.lpReserved2;
    VAR_22 = VAR_19.lpReserved2 + sizeof(unsigned);
    VAR_23 = (HANDLE*)(VAR_22 + VAR_24);

    VAR_24 = FUNC_7(VAR_24, (VAR_19.cbReserved2 - sizeof(unsigned)) / (sizeof(HANDLE) + 1));
    VAR_24 = FUNC_7(VAR_24, VAR_3);
    for (VAR_20 = 0; VAR_20 < VAR_24; VAR_20++)
    {
      if ((*VAR_22 & VAR_11) && *VAR_23 != VAR_2)
      {
        VAR_21 = FUNC_4(VAR_20);
        if(VAR_21 != &VAR_17)
            FUNC_8(VAR_21, *VAR_23, *VAR_22);
        FUNC_9(VAR_21);
      }

      VAR_22++; VAR_23++;
    }
  }

  VAR_21 = FUNC_4(VAR_6);
  if (!(VAR_21->wxflag & VAR_11) || VAR_21->handle == VAR_2) {
    HANDLE VAR_25 = FUNC_2(VAR_9);
    DWORD VAR_26 = FUNC_0(VAR_25);

    FUNC_8(VAR_21, VAR_25, VAR_11|VAR_13|((VAR_26&0xf)==VAR_0 ? VAR_14 : 0)
            |((VAR_26&0xf)==VAR_1 ? VAR_12 : 0));
  }
  FUNC_9(VAR_21);

  VAR_21 = FUNC_4(VAR_7);
  if (!(VAR_21->wxflag & VAR_11) || VAR_21->handle == VAR_2) {
    HANDLE VAR_27 = FUNC_2(VAR_10);
    DWORD VAR_28 = FUNC_0(VAR_27);

    FUNC_8(VAR_21, VAR_27, VAR_11|VAR_13|((VAR_28&0xf)==VAR_0 ? VAR_14 : 0)
            |((VAR_28&0xf)==VAR_1 ? VAR_12 : 0));
  }
  FUNC_9(VAR_21);

  VAR_21 = FUNC_4(VAR_5);
  if (!(VAR_21->wxflag & VAR_11) || VAR_21->handle == VAR_2) {
    HANDLE VAR_29 = FUNC_2(VAR_8);
    DWORD VAR_30 = FUNC_0(VAR_29);

    FUNC_8(VAR_21, VAR_29, VAR_11|VAR_13|((VAR_30&0xf)==VAR_0 ? VAR_14 : 0)
            |((VAR_30&0xf)==VAR_1 ? VAR_12 : 0));
  }
  FUNC_9(VAR_21);

  FUNC_3(":handles (%p)(%p)(%p)\n", FUNC_5(VAR_6)->handle,
        FUNC_5(VAR_7)->handle,
        FUNC_5(VAR_5)->handle);

  FUNC_6(VAR_18,0,3*sizeof(FILE));
  for (VAR_20 = 0; VAR_20 < 3; VAR_20++)
  {

    VAR_18[VAR_20]._file = VAR_20;
    VAR_18[VAR_20]._tmpfname = ((void*)0);
    VAR_18[VAR_20]._flag = (VAR_20 == 0) ? VAR_15 : VAR_16;
  }
  VAR_4 = 3;
}
