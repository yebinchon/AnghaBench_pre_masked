
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* height; void* width; void* start_y; void* start_x; } ;
typedef TYPE_1__ windowOptions ;
typedef int logfont ;
struct TYPE_5__ {int hfont; } ;
typedef int LPBYTE ;
typedef int LOGFONTW ;
typedef int HKEY ;
typedef int DWORD ;


 void* VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int ) ;
 TYPE_3__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_5 (int ,int ,int *,int*,int ,int*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static windowOptions FUNC_6(void)
{
 DWORD VAR_12;
 DWORD VAR_13;
 HKEY VAR_14;
 windowOptions VAR_15;
 LOGFONTW VAR_16;

        FUNC_4( VAR_4, VAR_11,
                       0, VAR_5, &VAR_14 );

 VAR_12 = sizeof(DWORD);

        if( FUNC_5( VAR_14, VAR_8, ((void*)0), &VAR_13,
                              (LPBYTE) &VAR_15.start_x, &VAR_12 ) != VAR_2 )
  VAR_15.start_x = VAR_0;

        if( FUNC_5( VAR_14, VAR_9, ((void*)0), &VAR_13,
                              (LPBYTE) &VAR_15.start_y, &VAR_12 ) != VAR_2 )
  VAR_15.start_y = VAR_0;

        if( FUNC_5( VAR_14, VAR_10, ((void*)0), &VAR_13,
                              (LPBYTE) &VAR_15.width, &VAR_12 ) != VAR_2 )
  VAR_15.width = VAR_0;

        if( FUNC_5( VAR_14, VAR_6, ((void*)0), &VAR_13,
                              (LPBYTE) &VAR_15.height, &VAR_12 ) != VAR_2 )
  VAR_15.height = VAR_0;
 VAR_12=sizeof(VAR_16);
 if( FUNC_5( VAR_14, VAR_7, ((void*)0), &VAR_13,
                              (LPBYTE) &VAR_16, &VAR_12 ) != VAR_2 )
  FUNC_1(FUNC_2(VAR_1),sizeof(VAR_16),&VAR_16);

 FUNC_3( VAR_14 );

 VAR_3.hfont = FUNC_0(&VAR_16);
 return VAR_15;
}
