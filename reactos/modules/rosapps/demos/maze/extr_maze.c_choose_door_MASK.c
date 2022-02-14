
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HDC ;


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
 size_t VAR_13 ;
 size_t VAR_14 ;
 int FUNC_0 (size_t,size_t,int,int ) ;
 size_t FUNC_1 (int) ;
 int** VAR_15 ;

__attribute__((used)) static int
FUNC_2(HDC VAR_16)
{
  int VAR_17[3];
  register int VAR_18;

  VAR_18 = 0;


  if ( VAR_15[VAR_13][VAR_14] & VAR_4 )
    goto rightwall;
  if ( VAR_15[VAR_13][VAR_14] & VAR_8 )
    goto rightwall;
  if ( VAR_15[VAR_13][VAR_14] & VAR_12 )
    goto rightwall;
  if ( VAR_15[VAR_13][VAR_14 - 1] & VAR_0 ) {
    VAR_15[VAR_13][VAR_14] |= VAR_12;
    VAR_15[VAR_13][VAR_14 - 1] |= VAR_9;
    FUNC_0(VAR_13, VAR_14, 0, VAR_16);
    goto rightwall;
  }
  VAR_17[VAR_18++] = 0;

 rightwall:

  if ( VAR_15[VAR_13][VAR_14] & VAR_3 )
    goto bottomwall;
  if ( VAR_15[VAR_13][VAR_14] & VAR_7 )
    goto bottomwall;
  if ( VAR_15[VAR_13][VAR_14] & VAR_11 )
    goto bottomwall;
  if ( VAR_15[VAR_13 + 1][VAR_14] & VAR_0 ) {
    VAR_15[VAR_13][VAR_14] |= VAR_11;
    VAR_15[VAR_13 + 1][VAR_14] |= VAR_10;
    FUNC_0(VAR_13, VAR_14, 1, VAR_16);
    goto bottomwall;
  }
  VAR_17[VAR_18++] = 1;

 bottomwall:

  if ( VAR_15[VAR_13][VAR_14] & VAR_1 )
    goto leftwall;
  if ( VAR_15[VAR_13][VAR_14] & VAR_5 )
    goto leftwall;
  if ( VAR_15[VAR_13][VAR_14] & VAR_9 )
    goto leftwall;
  if ( VAR_15[VAR_13][VAR_14 + 1] & VAR_0 ) {
    VAR_15[VAR_13][VAR_14] |= VAR_9;
    VAR_15[VAR_13][VAR_14 + 1] |= VAR_12;
    FUNC_0(VAR_13, VAR_14, 2, VAR_16);
    goto leftwall;
  }
  VAR_17[VAR_18++] = 2;

 leftwall:

  if ( VAR_15[VAR_13][VAR_14] & VAR_2 )
    goto donewall;
  if ( VAR_15[VAR_13][VAR_14] & VAR_6 )
    goto donewall;
  if ( VAR_15[VAR_13][VAR_14] & VAR_10 )
    goto donewall;
  if ( VAR_15[VAR_13 - 1][VAR_14] & VAR_0 ) {
    VAR_15[VAR_13][VAR_14] |= VAR_10;
    VAR_15[VAR_13 - 1][VAR_14] |= VAR_11;
    FUNC_0(VAR_13, VAR_14, 3, VAR_16);
    goto donewall;
  }
  VAR_17[VAR_18++] = 3;

 donewall:
  if (VAR_18 == 0)
    return ( -1 );
  if (VAR_18 == 1)
    return ( VAR_17[0] );
  return ( VAR_17[ FUNC_1(VAR_18) ] );

}
